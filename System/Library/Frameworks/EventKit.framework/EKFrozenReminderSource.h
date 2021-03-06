/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EKFrozenReminderObject.h>

@class NSString, REMAccount;

@interface EKFrozenReminderSource : EKFrozenReminderObject {

	NSString* _sourceIdentifier;
	REMAccount* _remAccount;

}

@property (nonatomic,readonly) NSString * sourceIdentifier;              //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,readonly) REMAccount * remAccount;                  //@synthesize remAccount=_remAccount - In the implementation block
-(NSString *)sourceIdentifier;
-(REMAccount *)remAccount;
@end

