/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIInputViewSetPlacementApplicator.h>

@protocol UIInputViewSetPlacementOwner;
@class NSArray, UIView, NSLayoutConstraint, NSString;

@interface UIInputViewSetPlacement_GenericApplicator : NSObject <UIInputViewSetPlacementApplicator> {

	NSLayoutConstraint* _horizontalConstraint;
	NSLayoutConstraint* _verticalConstraint;
	NSLayoutConstraint* _widthConstraint;
	id<UIInputViewSetPlacementOwner> _owner;

}

@property (readonly) CGPoint origin; 
@property (retain,readonly) NSArray * constraints; 
@property (retain,readonly) UIView * draggableView; 
@property (retain,readonly) UIView * twoFingerDraggableView; 
@property (readonly) UIEdgeInsets contentInsets; 
@property (readonly) CGRect popoverFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)applicatorForOwner:(id)arg1 withPlacement:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)invalidate;
-(CGPoint)origin;
-(void)prepare;
-(NSArray *)constraints;
-(UIEdgeInsets)contentInsets;
-(void)applyChanges:(id)arg1 ;
-(CGRect)targetRect;
-(id)initForOwner:(id)arg1 withPlacement:(id)arg2 ;
-(UIView *)draggableView;
-(void)checkVerticalConstraint;
-(BOOL)preBeginGesture:(id)arg1 shouldBegin:(BOOL*)arg2 ;
-(BOOL)isGesture:(id)arg1 inDraggableView:(CGPoint)arg2 ;
-(BOOL)allConstraintsActive;
-(UIView *)twoFingerDraggableView;
-(CGRect)popoverFrame;
@end

