//
//  MagnifyingGlass.h
//  MagnifyingGlass
//
//  Created by Jim Hillhouse on 6/8/11.
//  Copyright 2011 PortableFrontier. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MagnifyingGlass : UIView
{
    UILabel         *magnifyingGlassLabel;
    UIImage         *magnifyingGlassImage;
}

@property (nonatomic, retain) IBOutlet  UILabel         *magnifyingGlassLabel;
@property (nonatomic, retain) IBOutlet  UIImage         *magnifyingGlassImage;

@property                               CGFloat         magnifyingGlassDiameter;
@property                               CGFloat         maxMagnifyingGlassDiameter;
@property                               CGFloat         minMagnifyingGlassDiameter;
@property                               CGFloat         magnifyingGlassZoom;
@property                               CGFloat         magnifyingGlassScale;


// MagnifyingGlass Public Methods
- (IBAction)updateMagnifyingGlass;
- (void)updateMagnifyingGlassForZoom;
- (void)updateMagnifyingGlassForDiameter;
- (void)updateMagnifyingGlassLabelForZoom;
- (void)updateMagnifyingGlassLabelForDiameter;


@end