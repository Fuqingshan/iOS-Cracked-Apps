//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTDetailNatantViewBase.h"

@class SSThemedLabel;

@interface TTDetailNatantRelateReadSectionView : TTDetailNatantViewBase
{
    SSThemedLabel *_titleLabel;
    double _left;
}

@property(nonatomic) double left; // @synthesize left=_left;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)refreshTitle:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)refreshUI;
- (void)refreshWithWidth:(double)arg1;
- (id)initWithWidth:(double)arg1 left:(double)arg2;

@end

