/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SASyncAppIdentifyingInfo, NSNumber, NSArray, NSString;

@interface SASyncAppMetaData : AceObject <SAAceSerializable>

@property (nonatomic,retain) SASyncAppIdentifyingInfo * appIdentifyingInfo; 
@property (nonatomic,copy) NSNumber * developerMode; 
@property (nonatomic,copy) NSArray * syncSlots; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appMetaData;
+(id)appMetaDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)_af_preferredBundleID;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SASyncAppIdentifyingInfo *)appIdentifyingInfo;
-(void)setAppIdentifyingInfo:(SASyncAppIdentifyingInfo *)arg1 ;
-(NSNumber *)developerMode;
-(void)setDeveloperMode:(NSNumber *)arg1 ;
-(NSArray *)syncSlots;
-(void)setSyncSlots:(NSArray *)arg1 ;
@end

