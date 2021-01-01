/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, PXDataSection, PXNavigationListDataSection;

@interface PXNavigationListDataSubsection : NSObject {

	NSMutableDictionary* _listItemsCache;
	BOOL _skipAssetCountFetches;
	PXDataSection* _dataSection;
	PXNavigationListDataSection* _listDataSection;
	long long _indentationLevel;
	long long _indexDelta;
	long long _expandedIndex;
	long long _externalStartIndex;

}

@property (nonatomic,readonly) PXDataSection * dataSection;                                //@synthesize dataSection=_dataSection - In the implementation block
@property (nonatomic,readonly) PXNavigationListDataSection * listDataSection;              //@synthesize listDataSection=_listDataSection - In the implementation block
@property (nonatomic,readonly) long long indentationLevel;                                 //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (nonatomic,readonly) long long indexDelta;                                       //@synthesize indexDelta=_indexDelta - In the implementation block
@property (nonatomic,readonly) long long expandedIndex;                                    //@synthesize expandedIndex=_expandedIndex - In the implementation block
@property (nonatomic,readonly) long long externalStartIndex;                               //@synthesize externalStartIndex=_externalStartIndex - In the implementation block
@property (nonatomic,readonly) BOOL skipAssetCountFetches;                                 //@synthesize skipAssetCountFetches=_skipAssetCountFetches - In the implementation block
-(id)description;
-(BOOL)skipAssetCountFetches;
-(long long)indentationLevel;
-(PXDataSection *)dataSection;
-(id)initWithDataSection:(id)arg1 indexDelta:(long long)arg2 expandedIndex:(long long)arg3 indentationLevel:(long long)arg4 externalStartIndex:(long long)arg5 skipAssetCountFetches:(BOOL)arg6 ;
-(id)listItemAtExternalIndex:(long long)arg1 ;
-(PXNavigationListDataSection *)listDataSection;
-(long long)indexDelta;
-(long long)expandedIndex;
-(long long)externalStartIndex;
@end

