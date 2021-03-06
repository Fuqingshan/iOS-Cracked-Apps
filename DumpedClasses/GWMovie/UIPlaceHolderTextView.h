//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor, UILabel;

@interface UIPlaceHolderTextView : UITextView
{
    UILabel *_placeHolderLabel;
    NSString *_placeholder;
    UIColor *_placeholderColor;
}

@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
- (void).cxx_destruct;
- (void)textChanged:(id)arg1;
- (void)setFont:(id)arg1;
- (void)loadSubView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)dealloc;

@end

