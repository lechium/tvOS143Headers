/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSCache;

@interface _MPLazySectionedCollectionStorage : NSObject {

	vector<long, std::__1::allocator<long> >* _cachedNumberOfItemsInSections;
	long long _cachedNumberOfSections;
	BOOL _hasValidCachedNumberOfSections;
	NSCache* _itemsCache;
	map<long, MPIdentifierSet *, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, MPIdentifierSet *> > >* _itemIdentifierSetMap;
	NSCache* _sectionsCache;
	map<long, MPIdentifierSet *, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, MPIdentifierSet *> > >* _sectionIdentifierSetMap;

}
@end

