//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ETQZFont, FontQZEngine, NSDictionary, NSMutableArray, NSMutableAttributedString, NSString, UIColor;

@interface QZAttributedTextBuilder : NSObject
{
    _Bool _fontNotLoad;
    NSMutableAttributedString *_attributedString;
    NSMutableArray *_detectedLinks;
    NSMutableArray *_detectedAts;
    UIColor *_nicknameColor;
    UIColor *_urlColor;
    UIColor *_hltColor;
    long long _etFontId;
    NSString *_etFontUrl;
    long long _etFontType;
    ETQZFont *_etFont;
    FontQZEngine *_etEngine;
    long long _drawNormalTextOnly;
    long long _normalUrl;
    NSDictionary *_extraParam;
}

+ (void)setShowHighLight:(_Bool)arg1;
+ (_Bool)showHighLight;
@property(retain, nonatomic) NSDictionary *extraParam; // @synthesize extraParam=_extraParam;
@property(nonatomic) long long normalUrl; // @synthesize normalUrl=_normalUrl;
@property(nonatomic) long long drawNormalTextOnly; // @synthesize drawNormalTextOnly=_drawNormalTextOnly;
@property(nonatomic) _Bool fontNotLoad; // @synthesize fontNotLoad=_fontNotLoad;
@property(retain, nonatomic) FontQZEngine *etEngine; // @synthesize etEngine=_etEngine;
@property(retain, nonatomic) ETQZFont *etFont; // @synthesize etFont=_etFont;
@property(nonatomic) long long etFontType; // @synthesize etFontType=_etFontType;
@property(copy, nonatomic) NSString *etFontUrl; // @synthesize etFontUrl=_etFontUrl;
@property(nonatomic) long long etFontId; // @synthesize etFontId=_etFontId;
@property(retain, nonatomic) UIColor *hltColor; // @synthesize hltColor=_hltColor;
@property(retain, nonatomic) UIColor *urlColor; // @synthesize urlColor=_urlColor;
@property(retain, nonatomic) UIColor *nicknameColor; // @synthesize nicknameColor=_nicknameColor;
@property(retain, nonatomic) NSMutableArray *detectedAts; // @synthesize detectedAts=_detectedAts;
@property(retain, nonatomic) NSMutableArray *detectedLinks; // @synthesize detectedLinks=_detectedLinks;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void).cxx_destruct;
- (id)decodeAtText:(id)arg1;
- (id)decodeUrlText:(id)arg1;
- (_Bool)isUrlHyperLink:(id)arg1;
- (id)buildAttributedString:(id)arg1 additionalAttr:(id)arg2;
- (id)buildAttributedString:(id)arg1;
- (void)markAsRichText:(id)arg1 normalText:(_Bool)arg2;
- (void)setUrlToNormalText:(id)arg1 textColor:(id)arg2 Attr:(id)arg3 isAllNormal:(_Bool)arg4;
- (void)replaceETTextAttributedString:(id)arg1 font:(id)arg2;
- (id)buildImageAttributedString:(id)arg1 font:(id)arg2;
- (id)buildEmotionAttributedString:(id)arg1 font:(id)arg2 color:(id)arg3;
- (id)buildNicknameAttributedStringWithNickname:(id)arg1 uin:(long long)arg2 isShowAtSymbol:(_Bool)arg3 font:(id)arg4 color:(id)arg5 actionType:(long long)arg6 actionUrl:(id)arg7 isAllNormal:(_Bool)arg8;
- (id)buildNicknameAttributedStringWithString:(id)arg1 isShowAtSymbol:(_Bool)arg2 font:(id)arg3 color:(id)arg4 isAllNormal:(_Bool)arg5;
- (id)buildColorTextAttributedString:(id)arg1 font:(id)arg2 attribute:(id)arg3;
- (id)buildUrlAttributedString:(id)arg1 font:(id)arg2 color:(id)arg3 linkColor:(id)arg4;
- (id)buildHighLightAttributedString:(id)arg1 font:(id)arg2 color:(id)arg3;
- (id)buildNewlineAttributedString:(id)arg1 font:(id)arg2 color:(id)arg3;
- (id)buildNormalTextAttributedString:(id)arg1 font:(id)arg2 color:(id)arg3 attribute:(id)arg4;
- (int)nodeTypeFor:(id)arg1 atRange:(struct _NSRange)arg2;
- (void)appendImage:(id)arg1 font:(id)arg2;
- (void)appendNickname:(id)arg1 uin:(long long)arg2 font:(id)arg3 color:(id)arg4 actionType:(long long)arg5 actionUrl:(id)arg6;
- (void)appendAttributedText:(id)arg1 range:(struct _NSRange)arg2 type:(int)arg3 font:(id)arg4 color:(id)arg5 attribute:(id)arg6 linkColor:(id)arg7 isAllNormal:(_Bool)arg8;
- (void)appendText:(id)arg1 font:(id)arg2 color:(id)arg3 attribute:(id)arg4 linkColor:(id)arg5 isAllNormal:(_Bool)arg6;
- (void)appendText:(id)arg1 font:(id)arg2 color:(id)arg3 linkColor:(id)arg4;
- (void)appendText:(id)arg1 font:(id)arg2 color:(id)arg3 attribute:(id)arg4;
- (void)appendText:(id)arg1 font:(id)arg2 color:(id)arg3;
- (id)init;

@end
