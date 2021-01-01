/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSLocale, NSString;


@protocol HKConceptIndexable <HKCodedObject>
@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,copy,readonly) NSString * country; 
@required
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
-(NSLocale *)locale;
-(NSUUID *)UUID;
-(NSString *)country;

@end
