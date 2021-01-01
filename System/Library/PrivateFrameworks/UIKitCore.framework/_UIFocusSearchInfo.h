/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _UIFocusSearchInfo : NSObject {

	BOOL _treatFocusableItemAsLeaf;
	BOOL _forceFocusToLeaveContainer;
	/*^block*/id _evaluator;

}

@property (nonatomic,copy) id evaluator;                                   //@synthesize evaluator=_evaluator - In the implementation block
@property (assign,nonatomic) BOOL treatFocusableItemAsLeaf;                //@synthesize treatFocusableItemAsLeaf=_treatFocusableItemAsLeaf - In the implementation block
@property (assign,nonatomic) BOOL forceFocusToLeaveContainer;              //@synthesize forceFocusToLeaveContainer=_forceFocusToLeaveContainer - In the implementation block
+(id)defaultInfo;
-(id)evaluator;
-(void)setEvaluator:(id)arg1 ;
-(id)initWithFocusEvaluator:(/*^block*/id)arg1 ;
-(void)setForceFocusToLeaveContainer:(BOOL)arg1 ;
-(void)setTreatFocusableItemAsLeaf:(BOOL)arg1 ;
-(BOOL)shouldIncludeFocusItem:(id)arg1 ;
-(BOOL)treatFocusableItemAsLeaf;
-(BOOL)forceFocusToLeaveContainer;
@end
