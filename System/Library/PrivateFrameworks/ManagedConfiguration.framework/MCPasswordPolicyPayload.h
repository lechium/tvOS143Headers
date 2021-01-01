/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/MCPayload.h>

@class NSNumber;

@interface MCPasswordPolicyPayload : MCPayload {

	NSNumber* _isSimplePasscodeAllowed;
	NSNumber* _isPasscodeRequired;
	NSNumber* _isAlphanumericPasscodeRequired;
	NSNumber* _isManualFetchingWhenRoaming;
	NSNumber* _minLength;
	NSNumber* _maxFailedAttempts;
	NSNumber* _maxGracePeriodMinutes;
	NSNumber* _maxInactivityMinutes;
	NSNumber* _maxPasscodeAgeDays;
	NSNumber* _passcodeHistoryCount;
	NSNumber* _minComplexCharacters;

}

@property (nonatomic,retain,readonly) NSNumber * isSimplePasscodeAllowed;                     //@synthesize isSimplePasscodeAllowed=_isSimplePasscodeAllowed - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * isPasscodeRequired;                          //@synthesize isPasscodeRequired=_isPasscodeRequired - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * isAlphanumericPasscodeRequired;              //@synthesize isAlphanumericPasscodeRequired=_isAlphanumericPasscodeRequired - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * isManualFetchingWhenRoaming;                 //@synthesize isManualFetchingWhenRoaming=_isManualFetchingWhenRoaming - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * minLength;                                   //@synthesize minLength=_minLength - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * maxFailedAttempts;                           //@synthesize maxFailedAttempts=_maxFailedAttempts - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * maxGracePeriodMinutes;                       //@synthesize maxGracePeriodMinutes=_maxGracePeriodMinutes - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * maxInactivityMinutes;                        //@synthesize maxInactivityMinutes=_maxInactivityMinutes - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * maxPasscodeAgeDays;                          //@synthesize maxPasscodeAgeDays=_maxPasscodeAgeDays - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * passcodeHistoryCount;                        //@synthesize passcodeHistoryCount=_passcodeHistoryCount - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * minComplexCharacters;                        //@synthesize minComplexCharacters=_minComplexCharacters - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)title;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)verboseDescription;
-(id)subtitle1Description;
-(id)restrictions;
-(id)filterForUserEnrollmentOutError:(id*)arg1 ;
-(NSNumber *)isManualFetchingWhenRoaming;
-(NSNumber *)isSimplePasscodeAllowed;
-(NSNumber *)isPasscodeRequired;
-(NSNumber *)isAlphanumericPasscodeRequired;
-(NSNumber *)minLength;
-(NSNumber *)maxFailedAttempts;
-(NSNumber *)maxGracePeriodMinutes;
-(NSNumber *)maxInactivityMinutes;
-(NSNumber *)maxPasscodeAgeDays;
-(NSNumber *)passcodeHistoryCount;
-(NSNumber *)minComplexCharacters;
@end

