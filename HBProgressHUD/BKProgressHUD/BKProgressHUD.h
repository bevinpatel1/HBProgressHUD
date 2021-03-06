//
//  BKProgressHUD.h
//
//  Copyright 2015 Bevin Patel.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface BKProgressHUD : UIView
@property (nonatomic) int32_t redious;
@property (nonatomic) CGFloat progress;
@property (nonatomic) UIColor *tintColor;
@property (nonatomic) UIColor *fillColor;
@property (nonatomic) UIImage *hudImage;
@end
