//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface DWRecommendRefreshView : UIView
{
    UIImageView *_refreshimgView;
    UILabel *_textLabel;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *refreshimgView; // @synthesize refreshimgView=_refreshimgView;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setUpView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
