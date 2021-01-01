/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXSearchQueryOptions : NSObject <NSCopying> {

	BOOL _wantsCuratedAssetsFetchResult;
	BOOL _wantsLibraryChanges;
	BOOL _wantsWordEmbeddings;
	unsigned long long _curatedAssetLimit;
	unsigned long long _suggestionLimit;
	unsigned long long _filterOptions;

}

@property (assign,nonatomic) unsigned long long curatedAssetLimit;              //@synthesize curatedAssetLimit=_curatedAssetLimit - In the implementation block
@property (assign,nonatomic) BOOL wantsCuratedAssetsFetchResult;                //@synthesize wantsCuratedAssetsFetchResult=_wantsCuratedAssetsFetchResult - In the implementation block
@property (assign,nonatomic) unsigned long long suggestionLimit;                //@synthesize suggestionLimit=_suggestionLimit - In the implementation block
@property (assign,nonatomic) BOOL wantsLibraryChanges;                          //@synthesize wantsLibraryChanges=_wantsLibraryChanges - In the implementation block
@property (assign,nonatomic) unsigned long long filterOptions;                  //@synthesize filterOptions=_filterOptions - In the implementation block
@property (assign,nonatomic) BOOL wantsWordEmbeddings;                          //@synthesize wantsWordEmbeddings=_wantsWordEmbeddings - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)filterOptions;
-(BOOL)wantsCuratedAssetsFetchResult;
-(BOOL)wantsLibraryChanges;
-(unsigned long long)curatedAssetLimit;
-(void)setCuratedAssetLimit:(unsigned long long)arg1 ;
-(void)setWantsCuratedAssetsFetchResult:(BOOL)arg1 ;
-(unsigned long long)suggestionLimit;
-(void)setSuggestionLimit:(unsigned long long)arg1 ;
-(void)setWantsLibraryChanges:(BOOL)arg1 ;
-(void)setFilterOptions:(unsigned long long)arg1 ;
-(BOOL)wantsWordEmbeddings;
-(void)setWantsWordEmbeddings:(BOOL)arg1 ;
@end

