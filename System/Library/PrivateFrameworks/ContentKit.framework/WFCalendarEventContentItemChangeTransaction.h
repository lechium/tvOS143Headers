/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFContentItemChangeTransaction.h>

@class EKEvent;

@interface WFCalendarEventContentItemChangeTransaction : WFContentItemChangeTransaction {

	EKEvent* _mutableEvent;

}

@property (nonatomic,readonly) EKEvent * mutableEvent;              //@synthesize mutableEvent=_mutableEvent - In the implementation block
-(id)initWithContentItem:(id)arg1 ;
-(void)saveWithCompletionHandler:(/*^block*/id)arg1 isNew:(BOOL)arg2 ;
-(EKEvent *)mutableEvent;
@end
