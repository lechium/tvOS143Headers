/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/AXAssetLoader
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol AXAssetAssertion <NSObject>
@property (nonatomic,readonly) NSString * assetType; 
@property (nonatomic,readonly) NSString * clientIdentifier; 
@required
+(id)assertionWithPropertyListRepresentation:(id)arg1 error:(id*)arg2;
-(NSString *)clientIdentifier;
-(NSString *)assetType;
-(id)propertyListRepresentation;

@end

