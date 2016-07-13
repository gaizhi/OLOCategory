//
//  UIImage+OLOExtensions.h
//
//  Created by 强徐 on 16/7/13.
//  Copyright © 2016年 starnet. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (OLOExtensions)

- (UIImage *)imageAtRect:(CGRect)rect;
- (UIImage *)imageByScalingProportionallyToMinimumSize:(CGSize)targetSize;
- (UIImage *)imageByScalingProportionallyToSize:(CGSize)targetSize;
- (UIImage *)imageByScalingToSize:(CGSize)targetSize;
- (UIImage *)imageRotatedByRadians:(CGFloat)radians;
- (UIImage *)imageRotatedByDegrees:(CGFloat)degrees;

@end
