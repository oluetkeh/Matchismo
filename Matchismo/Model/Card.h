//
//  Card.h
//  Matchismo
//
//  Created by Olaf Luetkehoelter on 9/12/13.
//  Copyright (c) 2013 Olaf Luetkehoelter. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString * contents;
@property(nonatomic, getter = isFaceUp) BOOL faceUp;
@property(nonatomic, getter = isUnplayable) BOOL unplayable;

- (int) match:(NSArray *)otherCards;

@end
