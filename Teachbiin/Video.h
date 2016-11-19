//
//  Video.h
//  Teachbiin
//
//  Created by Paul Defilippi on 11/18/16.
//  Copyright © 2016 Paul Defilippi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Video : NSObject

@property(nonatomic,strong) NSString *videoTitle;
@property(nonatomic,strong) NSString *videoDescription;
@property(nonatomic,strong) NSString *videoIframe;
@property(nonatomic,strong) NSString *thumbnailUrl;

@end
