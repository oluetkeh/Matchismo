//
//  PlayingCard.h
//  Matchismo
//
//  Created by Olaf Luetkehoelter on 9/12/13.
//  Copyright (c) 2013 Olaf Luetkehoelter. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property(strong, nonatomic) NSString *suit;
@property(nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
