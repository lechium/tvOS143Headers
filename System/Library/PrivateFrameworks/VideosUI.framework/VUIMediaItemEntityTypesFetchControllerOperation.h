/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIMediaLibraryOperation.h>

@class VUIMediaItemEntityTypesFetchResponse, VUIMediaItemEntityTypesFetchControllerResult;

@interface VUIMediaItemEntityTypesFetchControllerOperation : VUIMediaLibraryOperation {

	long long _fetchReason;
	VUIMediaItemEntityTypesFetchResponse* _currentFetchResponse;
	VUIMediaItemEntityTypesFetchControllerResult* _result;

}

@property (assign,nonatomic) long long fetchReason;                                                    //@synthesize fetchReason=_fetchReason - In the implementation block
@property (nonatomic,retain) VUIMediaItemEntityTypesFetchControllerResult * result;                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) VUIMediaItemEntityTypesFetchResponse * currentFetchResponse;              //@synthesize currentFetchResponse=_currentFetchResponse - In the implementation block
+(id)_changeSetFromMediaItemEntityTypes:(id)arg1 toMediaItemEntityTypes:(id)arg2 ;
-(VUIMediaItemEntityTypesFetchControllerResult *)result;
-(void)setResult:(VUIMediaItemEntityTypesFetchControllerResult *)arg1 ;
-(void)executionDidBegin;
-(long long)fetchReason;
-(void)setFetchReason:(long long)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 fetchReason:(long long)arg2 ;
-(void)setCurrentFetchResponse:(VUIMediaItemEntityTypesFetchResponse *)arg1 ;
-(VUIMediaItemEntityTypesFetchResponse *)currentFetchResponse;
@end

