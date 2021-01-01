/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MusicLibrary/MusicLibrary-Structs.h>
@class NSString, ML3MusicLibrary;

@interface ML3SpotlightMatchingNameCache : NSObject {

	unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >* _matchingSet;
	NSString* _matchString;
	BOOL _idle;
	ML3MusicLibrary* _library;

}
+(void)initialize;
+(void)loadFromLibrary:(id)arg1 namesMatchingString:(id)arg2 cancelHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)_initWithLibrary:(id)arg1 matchString:(id)arg2 cancelHandler:(/*^block*/id)arg3 ;
@end
