/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXPeopleNamePickerViewControllerDelegate.h>
#import <libobjc.A.dylib/PXPeopleFlowViewController.h>

@protocol PXPeopleFlowViewControllerActionDelegate;
@class PXPeopleNamePickerViewController, PXPeopleNameSelection, UIView, NSLayoutConstraint, PHPerson, PXPeopleBootstrapContext, NSString;

@interface PXUIPeopleBootstrapNamingViewController : UIViewController <PXPeopleNamePickerViewControllerDelegate, PXPeopleFlowViewController> {

	BOOL _textDidChange;
	id _context;
	id<PXPeopleFlowViewControllerActionDelegate> actionDelegate;
	PXPeopleNamePickerViewController* _namePicker;
	PXPeopleNameSelection* _selection;
	UIView* _pickerBackgroundView;
	NSLayoutConstraint* _pickerBackgroundViewHeightConstraint;

}

@property (nonatomic,readonly) PHPerson * person; 
@property (nonatomic,readonly) PXPeopleBootstrapContext * bootstrapContext; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,retain) PXPeopleNamePickerViewController * namePicker;                                   //@synthesize namePicker=_namePicker - In the implementation block
@property (nonatomic,retain) PXPeopleNameSelection * selection;                                               //@synthesize selection=_selection - In the implementation block
@property (nonatomic,retain) UIView * pickerBackgroundView;                                                   //@synthesize pickerBackgroundView=_pickerBackgroundView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * pickerBackgroundViewHeightConstraint;                       //@synthesize pickerBackgroundViewHeightConstraint=_pickerBackgroundViewHeightConstraint - In the implementation block
@property (assign,nonatomic) BOOL textDidChange;                                                              //@synthesize textDidChange=_textDidChange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id context;                                                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) CGSize preferredSize; 
@property (assign,nonatomic,__weak) id<PXPeopleFlowViewControllerActionDelegate> actionDelegate; 
-(unsigned long long)type;
-(PHPerson *)person;
-(id)context;
-(void)setContext:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(PXPeopleNameSelection *)selection;
-(void)setSelection:(PXPeopleNameSelection *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setActionDelegate:(id<PXPeopleFlowViewControllerActionDelegate>)arg1 ;
-(id<PXPeopleFlowViewControllerActionDelegate>)actionDelegate;
-(void)willTransitionToNextInFlow;
-(void)namePickerControllerWillChangeText:(id)arg1 ;
-(void)namePickerController:(id)arg1 didPickPerson:(id)arg2 ;
-(void)namePickerController:(id)arg1 didPickContact:(id)arg2 ;
-(void)namePickerController:(id)arg1 didPickString:(id)arg2 ;
-(PXPeopleBootstrapContext *)bootstrapContext;
-(void)_updateNavigationBarForCurrentTraitCollection;
-(id)_localizedTitleString;
-(void)_captureStringSelectionIfNeeded;
-(PXPeopleNamePickerViewController *)namePicker;
-(void)setNamePicker:(PXPeopleNamePickerViewController *)arg1 ;
-(UIView *)pickerBackgroundView;
-(void)setPickerBackgroundView:(UIView *)arg1 ;
-(NSLayoutConstraint *)pickerBackgroundViewHeightConstraint;
-(void)setPickerBackgroundViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)textDidChange;
-(void)setTextDidChange:(BOOL)arg1 ;
@end

