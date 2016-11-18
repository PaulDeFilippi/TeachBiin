//
//  HTTPService.h
//  Teachbiin
//
//  Created by Paul Defilippi on 11/16/16.
//  Copyright © 2016 Paul Defilippi. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^onComplete)(NSArray * __nullable dataArray, NSString * __nullable errMessage);


@interface HTTPService : NSObject

+ (id) instance;
- (void) getTutorials:(nullable onComplete)completionHandler;

@end
