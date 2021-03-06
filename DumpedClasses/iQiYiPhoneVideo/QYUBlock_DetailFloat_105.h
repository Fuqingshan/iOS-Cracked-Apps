//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUBaseBlock.h"

@class IQYUpDataTopStepManager, QYUBtnControl, QYUTextSimple;

@interface QYUBlock_DetailFloat_105 : QYUBaseBlock
{
    QYUBtnControl *_vvBtn;
    QYUBtnControl *_upBtn;
    QYUBtnControl *_downBtn;
    QYUTextSimple *_srcMeta;
    unsigned long long _upDownState;
    IQYUpDataTopStepManager *_upDownManager;
}

+ (double)getHeightByData:(id)arg1 rowWidth:(double)arg2;
+ (void)load;
@property(retain, nonatomic) IQYUpDataTopStepManager *upDownManager; // @synthesize upDownManager=_upDownManager;
@property(nonatomic) unsigned long long upDownState; // @synthesize upDownState=_upDownState;
@property(retain, nonatomic) QYUTextSimple *srcMeta; // @synthesize srcMeta=_srcMeta;
@property(retain, nonatomic) QYUBtnControl *downBtn; // @synthesize downBtn=_downBtn;
@property(retain, nonatomic) QYUBtnControl *upBtn; // @synthesize upBtn=_upBtn;
@property(retain, nonatomic) QYUBtnControl *vvBtn; // @synthesize vvBtn=_vvBtn;
- (void).cxx_destruct;
- (void)upDownClick:(id)arg1;
- (void)processEvent:(id)arg1;
- (void)applyData;
- (void)setBlocksFrame;
- (void)initSubControls;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2;

@end

