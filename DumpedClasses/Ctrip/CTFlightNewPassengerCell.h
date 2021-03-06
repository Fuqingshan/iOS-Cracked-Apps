//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UIAlertViewDelegate.h"

@class CTFlightOrderChildrenBookingAdultTicketView, CTFlightOrderPassengerCellViewModel, CTFlightPassengerNameEditView, CTFlightPassengerTravelCardView, CTVectorImageView, NSIndexPath, NSLayoutConstraint, NSString, UIButton, UILabel, UIView;

@interface CTFlightNewPassengerCell : UITableViewCell <UIAlertViewDelegate>
{
    _Bool _ageStageChanged;
    int _countryArea;
    int _policyFlag;
    NSIndexPath *_indexPath;
    id <CTFlightNewPassengerCellDelegate> _delegate;
    id <CTFlightNewPassengerCellDataSource> _datasource;
    UIView *_editBGView;
    NSLayoutConstraint *_editBGHeightConstraint;
    NSLayoutConstraint *_editBGLeftConstraint;
    CTFlightPassengerNameEditView *_lastNameEditView;
    CTFlightPassengerNameEditView *_firstNameEditView;
    CTFlightPassengerNameEditView *_certificateEditView;
    CTFlightPassengerNameEditView *_bankEditView;
    CTFlightPassengerNameEditView *_birthdayEditView;
    CTFlightPassengerNameEditView *_phoneEditView;
    NSLayoutConstraint *_lastNameEditViewHeightConstraint;
    NSLayoutConstraint *_firstNameEditViewHeightConstraint;
    NSLayoutConstraint *_certificateEditViewHeightConstraint;
    NSLayoutConstraint *_certificateEditViewTopConstraint;
    NSLayoutConstraint *_bankEditViewHeightConstraint;
    NSLayoutConstraint *_birthdayEditViewHeightConstraint;
    NSLayoutConstraint *_phoneEditViewHeightConstraint;
    CTFlightPassengerTravelCardView *_travelCardView;
    UIView *_travelCardBGView;
    NSLayoutConstraint *_travelCardBGLeftCons;
    NSLayoutConstraint *_travelCardBGHeightCons;
    CTVectorImageView *_indexTagView;
    UILabel *_indexTagLabel;
    UIButton *_deleteButton;
    CTFlightOrderChildrenBookingAdultTicketView *_childrenBookingAdultTicketView;
    NSLayoutConstraint *_childrenBookingAdultTicketViewCons_Left;
    NSLayoutConstraint *_childrenBookingAdultTicketViewCons_Height;
    UIView *_bottomLineView;
    NSLayoutConstraint *_bottomLineHeightConstraint;
    NSLayoutConstraint *_bottomLineWidthConstraint;
    CTFlightOrderPassengerCellViewModel *_passengerCellViewModel;
}

+ (double)layoutFrequentFlyerCardView:(id)arg1 withCellViewModel:(id)arg2;
+ (double)layoutTicketPickerView:(id)arg1 withCellViewModel:(id)arg2 showDeleteButton:(_Bool)arg3;
+ (double)layoutCertificateEditView:(id)arg1 withCellViewModel:(id)arg2 showDeleteButton:(_Bool)arg3 policyFlag:(int)arg4;
+ (double)layoutNameEditView:(id)arg1 withCellViewModel:(id)arg2 showDeleteButton:(_Bool)arg3 policyFlag:(int)arg4;
+ (double)getInputTextFieldWidth:(_Bool)arg1;
+ (double)setupCellSubView:(id)arg1 withViewModel:(id)arg2 showFrequentFlyerCard:(_Bool)arg3 showDeleteButton:(_Bool)arg4 policyFlag:(int)arg5;
@property(nonatomic) int policyFlag; // @synthesize policyFlag=_policyFlag;
@property(retain, nonatomic) CTFlightOrderPassengerCellViewModel *passengerCellViewModel; // @synthesize passengerCellViewModel=_passengerCellViewModel;
@property(nonatomic) __weak NSLayoutConstraint *bottomLineWidthConstraint; // @synthesize bottomLineWidthConstraint=_bottomLineWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *bottomLineHeightConstraint; // @synthesize bottomLineHeightConstraint=_bottomLineHeightConstraint;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(nonatomic) _Bool ageStageChanged; // @synthesize ageStageChanged=_ageStageChanged;
@property(nonatomic) __weak NSLayoutConstraint *childrenBookingAdultTicketViewCons_Height; // @synthesize childrenBookingAdultTicketViewCons_Height=_childrenBookingAdultTicketViewCons_Height;
@property(nonatomic) __weak NSLayoutConstraint *childrenBookingAdultTicketViewCons_Left; // @synthesize childrenBookingAdultTicketViewCons_Left=_childrenBookingAdultTicketViewCons_Left;
@property(retain, nonatomic) CTFlightOrderChildrenBookingAdultTicketView *childrenBookingAdultTicketView; // @synthesize childrenBookingAdultTicketView=_childrenBookingAdultTicketView;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UILabel *indexTagLabel; // @synthesize indexTagLabel=_indexTagLabel;
@property(retain, nonatomic) CTVectorImageView *indexTagView; // @synthesize indexTagView=_indexTagView;
@property(nonatomic) __weak NSLayoutConstraint *travelCardBGHeightCons; // @synthesize travelCardBGHeightCons=_travelCardBGHeightCons;
@property(nonatomic) __weak NSLayoutConstraint *travelCardBGLeftCons; // @synthesize travelCardBGLeftCons=_travelCardBGLeftCons;
@property(nonatomic) __weak UIView *travelCardBGView; // @synthesize travelCardBGView=_travelCardBGView;
@property(retain, nonatomic) CTFlightPassengerTravelCardView *travelCardView; // @synthesize travelCardView=_travelCardView;
@property(nonatomic) __weak NSLayoutConstraint *phoneEditViewHeightConstraint; // @synthesize phoneEditViewHeightConstraint=_phoneEditViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *birthdayEditViewHeightConstraint; // @synthesize birthdayEditViewHeightConstraint=_birthdayEditViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *bankEditViewHeightConstraint; // @synthesize bankEditViewHeightConstraint=_bankEditViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *certificateEditViewTopConstraint; // @synthesize certificateEditViewTopConstraint=_certificateEditViewTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *certificateEditViewHeightConstraint; // @synthesize certificateEditViewHeightConstraint=_certificateEditViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *firstNameEditViewHeightConstraint; // @synthesize firstNameEditViewHeightConstraint=_firstNameEditViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *lastNameEditViewHeightConstraint; // @synthesize lastNameEditViewHeightConstraint=_lastNameEditViewHeightConstraint;
@property(retain, nonatomic) CTFlightPassengerNameEditView *phoneEditView; // @synthesize phoneEditView=_phoneEditView;
@property(retain, nonatomic) CTFlightPassengerNameEditView *birthdayEditView; // @synthesize birthdayEditView=_birthdayEditView;
@property(retain, nonatomic) CTFlightPassengerNameEditView *bankEditView; // @synthesize bankEditView=_bankEditView;
@property(retain, nonatomic) CTFlightPassengerNameEditView *certificateEditView; // @synthesize certificateEditView=_certificateEditView;
@property(retain, nonatomic) CTFlightPassengerNameEditView *firstNameEditView; // @synthesize firstNameEditView=_firstNameEditView;
@property(retain, nonatomic) CTFlightPassengerNameEditView *lastNameEditView; // @synthesize lastNameEditView=_lastNameEditView;
@property(nonatomic) __weak NSLayoutConstraint *editBGLeftConstraint; // @synthesize editBGLeftConstraint=_editBGLeftConstraint;
@property(nonatomic) __weak NSLayoutConstraint *editBGHeightConstraint; // @synthesize editBGHeightConstraint=_editBGHeightConstraint;
@property(retain, nonatomic) UIView *editBGView; // @synthesize editBGView=_editBGView;
@property(nonatomic) int countryArea; // @synthesize countryArea=_countryArea;
@property(nonatomic) __weak id <CTFlightNewPassengerCellDataSource> datasource; // @synthesize datasource=_datasource;
@property(nonatomic) __weak id <CTFlightNewPassengerCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (int)getAgeStage;
- (_Bool)checkPersonAgeStageChanged;
- (id)checkCertificate;
- (id)checkPhoneNumber;
- (id)checkBirthday;
- (void)resetBirthday;
- (void)resetCertificateNo;
- (void)resetEnglishFirstName;
- (void)resetEnglishLastName;
- (void)resetChineseName;
- (void)onSelectCertificate:(id)arg1;
- (void)onChangeGovernMemberType:(int)arg1;
- (id)onGroupUserViewDidEndEditingWithErrorInfo:(id)arg1 needMoreCheck:(_Bool)arg2;
- (id)onPhoneViewDidEndEditingWithErrorInfo:(id)arg1 needMoreCheck:(_Bool)arg2;
- (id)onBirthdayViewDidEndEditingWithErrorInfo:(id)arg1 needMoreCheck:(_Bool)arg2;
- (id)onCertificateViewDidEndEditingWithErrorInfo:(id)arg1 needMoreCheck:(_Bool)arg2;
- (id)onFirstNameViewDidEndEditingWithErrorInfo:(id)arg1 needMoreCheck:(_Bool)arg2;
- (id)onLastNameViewDidEndEditingWithErrorInfo:(id)arg1 needMoreCheck:(_Bool)arg2;
- (id)onChineseNameViewDidEndEditingWithErrorInfo:(id)arg1 needMoreCheck:(_Bool)arg2;
- (void)onEditViewDidEndEditing:(id)arg1 withErrInfo:(id)arg2;
- (void)onEditViewDidBeginEditing:(id)arg1;
- (void)onEditViewWillBeginEditing:(id)arg1;
- (_Bool)isAllTextFieldResignResponder;
- (void)setShowBottomLine:(_Bool)arg1 lineWidth:(double)arg2 color:(id)arg3;
- (void)showErrorWarningWink;
- (void)setFirstResponderEditType:(long long)arg1;
- (void)setCurrentEditStatus:(_Bool)arg1;
- (void)setPassengerIndex:(long long)arg1;
- (void)showDeleteButton:(_Bool)arg1;
- (void)onTapTravelCardBGView:(id)arg1;
- (void)changeCurrentEditLanguage;
- (void)showCertificatePickerView;
- (void)showGovernmentMemberBankPickerVC;
- (void)showGovernmentMemberTypePickerVC;
- (void)showNameEditInfoWithEditType:(long long)arg1;
- (void)showRefundChangeDetailAtIndex:(long long)arg1;
- (void)onSelectPassengerTicketAtIndex:(long long)arg1;
- (void)onTapDeleteButton:(id)arg1;
- (void)initActions;
- (void)initView;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

