/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSDictionary;

@interface SASVGenerateDuc : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * ducFamilyId; 
@property (nonatomic,copy) NSString * ducId; 
@property (nonatomic,copy) NSDictionary * parameters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generateDuc;
+(id)generateDucWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)encodedClassName;
-(NSString *)ducFamilyId;
-(void)setDucFamilyId:(NSString *)arg1 ;
-(NSString *)ducId;
-(void)setDucId:(NSString *)arg1 ;
@end
