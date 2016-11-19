//
//  VideoVC.h
//  Teachbiin
//
//  Created by Paul Defilippi on 11/19/16.
//  Copyright © 2016 Paul Defilippi. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Video;

@interface VideoVC : UIViewController <UIWebViewDelegate>
@property(nonatomic,strong) Video *video;
@end
