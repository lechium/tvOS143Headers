/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>

@interface WFRemoveCalendarItemsAction : WFAction {

	unsigned long long _requiredConfirmations;
	unsigned long long _currentConfirmation;

}

@property (assign,nonatomic) unsigned long long requiredConfirmations;              //@synthesize requiredConfirmations=_requiredConfirmations - In the implementation block
@property (assign,nonatomic) unsigned long long currentConfirmation;                //@synthesize currentConfirmation=_currentConfirmation - In the implementation block
-(unsigned long long)requiredConfirmations;
-(void)setRequiredConfirmations:(unsigned long long)arg1 ;
-(unsigned long long)currentConfirmation;
-(void)setCurrentConfirmation:(unsigned long long)arg1 ;
@end
