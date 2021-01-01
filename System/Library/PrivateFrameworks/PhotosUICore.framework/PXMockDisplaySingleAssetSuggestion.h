/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXDisplaySuggestion.h>

@class NSString, NSDictionary, NSDate, PHAsset;

@interface PXMockDisplaySingleAssetSuggestion : NSObject <PXDisplaySuggestion> {

	unsigned short _type;
	unsigned short _subtype;
	unsigned short _state;
	NSString* _title;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	NSDictionary* _actionProperties;
	PHAsset* _asset;

}

@property (nonatomic,readonly) PHAsset * asset;                              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) unsigned short state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned short type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short subtype;                       //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,copy,readonly) NSString * localIdentifier; 
@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) NSString * localizedSubtitle;                 //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionProperties;              //@synthesize actionProperties=_actionProperties - In the implementation block
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)type;
-(unsigned short)state;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)title;
-(unsigned short)subtype;
-(NSString *)localizedTitle;
-(NSString *)localizedSubtitle;
-(PHAsset *)asset;
-(NSString *)localIdentifier;
-(NSDictionary *)actionProperties;
-(id)fetchKeyAssets;
-(id)initWithAsset:(id)arg1 type:(unsigned short)arg2 subtype:(unsigned short)arg3 title:(id)arg4 ;
@end

