/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString;

@interface SSVStoreDownload : NSObject {

	NSDictionary* _properties;
	NSString* _preferredAssetFlavor;

}

@property (nonatomic,readonly) NSDictionary * properties;                //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) NSString * preferredAssetFlavor;              //@synthesize preferredAssetFlavor=_preferredAssetFlavor - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)properties;
-(void)setPreferredAssetFlavor:(NSString *)arg1 ;
-(NSString *)preferredAssetFlavor;
@end

