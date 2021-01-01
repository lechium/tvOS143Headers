/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3DAAPImportOperation.h>

@interface ML3SubscriptionImportOperation : ML3DAAPImportOperation
-(void)main;
-(shared_ptr<ML3DAAPImportItem>*)importItemFromDAAPElement:(shared_ptr<ML3CPP::Element>*)arg1 ;
-(void)updateImportProgress:(float)arg1 ;
-(shared_ptr<ML3DAAPImportItem>*)containerImportItemFromDAAPElement:(shared_ptr<ML3CPP::Element>*)arg1 withTrackIds:(vector<long long, std::__1::allocator<long long> >*)arg2 trackPersonIdentifiers:(vector<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > >, std::__1::allocator<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > > >*)arg3 ;
-(unsigned long long)importSource;
-(BOOL)_performDAAPImportWithTransaction:(id)arg1 ;
@end

