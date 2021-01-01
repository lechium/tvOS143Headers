/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>
#import <libobjc.A.dylib/EKDefaultPropertiesLoading.h>

@class NSString;

@interface CADEventCreatedFromSuggestionPredicate : EKPredicate <EKDefaultPropertiesLoading> {

	NSString* _opaqueKey;
	NSString* _extractionGroupIdentifier;

}

@property (nonatomic,readonly) NSString * opaqueKey;                              //@synthesize opaqueKey=_opaqueKey - In the implementation block
@property (nonatomic,readonly) NSString * extractionGroupIdentifier;              //@synthesize extractionGroupIdentifier=_extractionGroupIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)predicateForAllSuggestedEvents;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)predicateFormat;
-(BOOL)shouldLoadDefaultProperties;
-(id)defaultPropertiesToLoad;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)initWithOpaqueKey:(id)arg1 extractionGroupIdentifier:(id)arg2 ;
-(NSString *)opaqueKey;
-(NSString *)extractionGroupIdentifier;
-(id)initWithExtractionGroupIdentifier:(id)arg1 ;
-(id)initWithOpaqueKey:(id)arg1 ;
@end
