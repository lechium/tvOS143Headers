/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIInputViewSetPlacementOnScreen.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIInputViewSetPlacementDragToDismiss : UIInputViewSetPlacementOnScreen <NSSecureCoding> {

	BOOL _dismissKeyboardOnly;
	double _offset;

}

@property (assign,nonatomic) double offset;                         //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) BOOL dismissKeyboardOnly;              //@synthesize dismissKeyboardOnly=_dismissKeyboardOnly - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)placementWithOffset:(double)arg1 dismissKeyboardOnly:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)offset;
-(void)setOffset:(double)arg1 ;
-(BOOL)isInteractive;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(Class)applicatorClassForKeyboard:(BOOL)arg1 ;
-(void)setDismissKeyboardOnly:(BOOL)arg1 ;
-(BOOL)dismissKeyboardOnly;
@end
