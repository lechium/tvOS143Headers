/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLCombinedAssetSearchResult.h>

@class NSString;

@interface PLNamedCombinedAssetSearchResult : PLCombinedAssetSearchResult {

	NSString* _name;

}

@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)contentStrings;
-(id)matchRanges;
-(id)initWithName:(id)arg1 assetSearchResults:(id)arg2 canOverlap:(BOOL)arg3 ;
-(unsigned long long)matchCount;
-(BOOL)hasSpecialName;
@end

