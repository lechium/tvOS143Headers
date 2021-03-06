/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@interface HMDPhotoLibraryImportingPersonsImportedLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	long long _totalNumberOfImportedPersons;
	long long _numberOfNamedImportedPersons;

}

@property (readonly) long long totalNumberOfImportedPersons;              //@synthesize totalNumberOfImportedPersons=_totalNumberOfImportedPersons - In the implementation block
@property (readonly) long long numberOfNamedImportedPersons;              //@synthesize numberOfNamedImportedPersons=_numberOfNamedImportedPersons - In the implementation block
+(id)identifier;
-(id)eventName;
-(id)serializedEvent;
-(long long)totalNumberOfImportedPersons;
-(long long)numberOfNamedImportedPersons;
-(id)initWithTotalNumberOfImportedPersons:(long long)arg1 numberOfNamedImportedPersons:(long long)arg2 ;
@end

