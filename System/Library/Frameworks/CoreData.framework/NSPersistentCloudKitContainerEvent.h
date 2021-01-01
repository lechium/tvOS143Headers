/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSManagedObjectID, NSUUID, NSString, NSDate, NSError;

@interface NSPersistentCloudKitContainerEvent : NSObject <NSCopying> {

	BOOL _succeeded;
	NSManagedObjectID* _ckEventObjectID;
	NSUUID* _identifier;
	NSString* _storeIdentifier;
	long long _type;
	NSDate* _startDate;
	NSDate* _endDate;
	NSError* _error;

}

@property (nonatomic,readonly) NSManagedObjectID * ckEventObjectID;              //@synthesize ckEventObjectID=_ckEventObjectID - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * storeIdentifier;                       //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) BOOL succeeded;                                   //@synthesize succeeded=_succeeded - In the implementation block
@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
+(id)eventTypeString:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(long long)type;
-(NSUUID *)identifier;
-(NSError *)error;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(id)initWithCKEvent:(id)arg1 ;
-(BOOL)succeeded;
-(NSManagedObjectID *)ckEventObjectID;
-(NSString *)storeIdentifier;
@end

