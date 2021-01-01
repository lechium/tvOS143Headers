/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CADObjectID, NSDate, NSTimeZone, NSURL, NSString;

@interface EKAlarmOccurrence : NSObject {

	CADObjectID* _alarmID;
	CADObjectID* _ownerID;
	NSDate* _ownerDate;
	NSTimeZone* _ownerTimeZone;
	NSURL* _ownerURI;
	NSDate* _fireDate;
	NSString* _externalID;
	NSDate* _acknowledgedDate;

}

@property (nonatomic,readonly) CADObjectID * alarmID;                   //@synthesize alarmID=_alarmID - In the implementation block
@property (nonatomic,readonly) CADObjectID * ownerID;                   //@synthesize ownerID=_ownerID - In the implementation block
@property (nonatomic,readonly) NSDate * ownerDate;                      //@synthesize ownerDate=_ownerDate - In the implementation block
@property (nonatomic,readonly) NSTimeZone * ownerTimeZone;              //@synthesize ownerTimeZone=_ownerTimeZone - In the implementation block
@property (nonatomic,readonly) NSURL * ownerURI;                        //@synthesize ownerURI=_ownerURI - In the implementation block
@property (nonatomic,readonly) NSDate * fireDate;                       //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,readonly) NSString * externalID;                   //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) NSDate * acknowledgedDate;               //@synthesize acknowledgedDate=_acknowledgedDate - In the implementation block
+(id)alarmOccurrenceWithAlarmID:(id)arg1 ownerID:(id)arg2 ownerDate:(id)arg3 ownerTimeZone:(id)arg4 ownerURI:(id)arg5 fireDate:(id)arg6 externalID:(id)arg7 acknowledgedDate:(id)arg8 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)fireDate;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(CADObjectID *)alarmID;
-(NSString *)externalID;
-(CADObjectID *)ownerID;
-(id)initWithAlarmID:(id)arg1 ownerID:(id)arg2 ownerDate:(id)arg3 ownerTimeZone:(id)arg4 ownerURI:(id)arg5 fireDate:(id)arg6 externalID:(id)arg7 acknowledgedDate:(id)arg8 ;
-(NSDate *)ownerDate;
-(NSTimeZone *)ownerTimeZone;
-(NSURL *)ownerURI;
-(NSDate *)acknowledgedDate;
@end

