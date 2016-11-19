//
//  VideoCell.h
//  Teachbiin
//
//  Created by Paul Defilippi on 11/18/16.
//  Copyright © 2016 Paul Defilippi. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Video;

@interface VideoCell : UITableViewCell
-(void)updateUI:(nonnull Video*)video;

@end
