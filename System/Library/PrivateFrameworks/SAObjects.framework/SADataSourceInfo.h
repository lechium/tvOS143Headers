/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SADataSourceInfo : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * contextIdentifier; 
@property (nonatomic,copy) NSString * proximityHint; 
@property (nonatomic,copy) NSString * sourceDeviceOwnership; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)contextIdentifier;
-(void)setContextIdentifier:(NSString *)arg1 ;
-(NSString *)proximityHint;
-(void)setProximityHint:(NSString *)arg1 ;
-(NSString *)sourceDeviceOwnership;
-(void)setSourceDeviceOwnership:(NSString *)arg1 ;
@end

