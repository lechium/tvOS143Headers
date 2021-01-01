/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSSet, UITapGestureRecognizer, NSString;

@interface AVGestureRecognizerDelegate : NSObject <UIGestureRecognizerDelegate> {

	NSSet* _exclusiveGestureRecognizers;
	NSSet* _gestureRecognizersThatMustFail;
	UITapGestureRecognizer* _dismissalMenuTapRecognizer;
	UITapGestureRecognizer* _otherMenuTapRecognizer;
	/*^block*/id _userInteractionAllowedBlock;
	/*^block*/id _shouldBeginDismissalMenuTapGesture;
	/*^block*/id _shouldBeginOtherMenuTapBlockGesture;

}

@property (nonatomic,retain) NSSet * exclusiveGestureRecognizers;                                        //@synthesize exclusiveGestureRecognizers=_exclusiveGestureRecognizers - In the implementation block
@property (nonatomic,retain) NSSet * gestureRecognizersThatMustFail;                                     //@synthesize gestureRecognizersThatMustFail=_gestureRecognizersThatMustFail - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * dismissalMenuTapRecognizer;                        //@synthesize dismissalMenuTapRecognizer=_dismissalMenuTapRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * otherMenuTapRecognizer;                            //@synthesize otherMenuTapRecognizer=_otherMenuTapRecognizer - In the implementation block
@property (nonatomic,copy) id userInteractionAllowedBlock;                                               //@synthesize userInteractionAllowedBlock=_userInteractionAllowedBlock - In the implementation block
@property (getter=isUserInteractionAllowed,nonatomic,readonly) BOOL userInteractionAllowed; 
@property (nonatomic,copy) id shouldBeginDismissalMenuTapGesture;                                        //@synthesize shouldBeginDismissalMenuTapGesture=_shouldBeginDismissalMenuTapGesture - In the implementation block
@property (nonatomic,copy) id shouldBeginOtherMenuTapBlockGesture;                                       //@synthesize shouldBeginOtherMenuTapBlockGesture=_shouldBeginOtherMenuTapBlockGesture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)isUserInteractionAllowed;
-(NSSet *)exclusiveGestureRecognizers;
-(void)setExclusiveGestureRecognizers:(NSSet *)arg1 ;
-(NSSet *)gestureRecognizersThatMustFail;
-(void)setGestureRecognizersThatMustFail:(NSSet *)arg1 ;
-(UITapGestureRecognizer *)dismissalMenuTapRecognizer;
-(void)setDismissalMenuTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)otherMenuTapRecognizer;
-(void)setOtherMenuTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)userInteractionAllowedBlock;
-(void)setUserInteractionAllowedBlock:(id)arg1 ;
-(id)shouldBeginDismissalMenuTapGesture;
-(void)setShouldBeginDismissalMenuTapGesture:(id)arg1 ;
-(id)shouldBeginOtherMenuTapBlockGesture;
-(void)setShouldBeginOtherMenuTapBlockGesture:(id)arg1 ;
@end
