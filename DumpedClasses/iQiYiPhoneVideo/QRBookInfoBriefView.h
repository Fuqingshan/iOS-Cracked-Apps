//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableAttributedString, QRLabel, UIImageView;

@interface QRBookInfoBriefView : UIControl
{
    _Bool _isExpanded;
    CDUnknownBlockType _triggerHandler;
    QRLabel *_breifLbl;
    UIImageView *_expandedThumb;
    NSMutableAttributedString *_restrictedBreif;
    NSMutableAttributedString *_breifAndEditorNote;
    double _restrictedBreifHeight;
    double _breifHeight;
}

@property(nonatomic) double breifHeight; // @synthesize breifHeight=_breifHeight;
@property(nonatomic) double restrictedBreifHeight; // @synthesize restrictedBreifHeight=_restrictedBreifHeight;
@property(retain, nonatomic) NSMutableAttributedString *breifAndEditorNote; // @synthesize breifAndEditorNote=_breifAndEditorNote;
@property(retain, nonatomic) NSMutableAttributedString *restrictedBreif; // @synthesize restrictedBreif=_restrictedBreif;
@property(retain, nonatomic) UIImageView *expandedThumb; // @synthesize expandedThumb=_expandedThumb;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(retain, nonatomic) QRLabel *breifLbl; // @synthesize breifLbl=_breifLbl;
@property(copy, nonatomic) CDUnknownBlockType triggerHandler; // @synthesize triggerHandler=_triggerHandler;
- (void).cxx_destruct;
- (id)stringByTrimmingLeftCharactersInSet:(id)arg1 WithString:(id)arg2;
- (id)breifAttribute:(_Bool)arg1;
- (void)trigger:(id)arg1;
- (void)setBookBrief:(id)arg1 WithEditorNote:(id)arg2 WithOnlineStatus:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

