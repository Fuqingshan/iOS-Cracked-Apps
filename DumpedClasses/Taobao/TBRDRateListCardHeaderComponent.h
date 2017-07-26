//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCBaseComponent.h"

@class NSMutableArray, UIButton, UIImageView, UILabel;

@interface TBRDRateListCardHeaderComponent : TBCBaseComponent
{
    UIImageView *_ivHead;
    UIImageView *_ivGold;
    UILabel *_lbName;
    NSMutableArray *_arrUserTags;
    UILabel *_lbPersonalizedTag;
    UIImageView *_ivLeifengxia;
    UIImageView *_ivTrialEvaluation;
    UILabel *_lbActionArrow;
    UILabel *_lbRateLevel;
    UIButton *_btnRate;
    UILabel *_lbShopCount;
}

+ (id)defaultStyle;
+ (id)componentTag;
@property(retain, nonatomic) UILabel *lbShopCount; // @synthesize lbShopCount=_lbShopCount;
@property(retain, nonatomic) UIButton *btnRate; // @synthesize btnRate=_btnRate;
@property(retain, nonatomic) UILabel *lbRateLevel; // @synthesize lbRateLevel=_lbRateLevel;
@property(retain, nonatomic) UILabel *lbActionArrow; // @synthesize lbActionArrow=_lbActionArrow;
@property(retain, nonatomic) UIImageView *ivTrialEvaluation; // @synthesize ivTrialEvaluation=_ivTrialEvaluation;
@property(retain, nonatomic) UIImageView *ivLeifengxia; // @synthesize ivLeifengxia=_ivLeifengxia;
@property(retain, nonatomic) UILabel *lbPersonalizedTag; // @synthesize lbPersonalizedTag=_lbPersonalizedTag;
@property(retain, nonatomic) NSMutableArray *arrUserTags; // @synthesize arrUserTags=_arrUserTags;
@property(retain, nonatomic) UILabel *lbName; // @synthesize lbName=_lbName;
@property(retain, nonatomic) UIImageView *ivGold; // @synthesize ivGold=_ivGold;
@property(retain, nonatomic) UIImageView *ivHead; // @synthesize ivHead=_ivHead;
- (void).cxx_destruct;
- (void)goUserIndexTap:(id)arg1;
- (void)lbActionArrowTap:(id)arg1;
- (void)btnRateAction:(id)arg1;
- (void)downUserTagImage:(id)arg1 index:(long long)arg2 inArr:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void)loadContext:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
