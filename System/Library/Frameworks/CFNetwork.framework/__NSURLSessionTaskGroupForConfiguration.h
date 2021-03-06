/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSURLSessionConfiguration, NSURLSession;


@protocol __NSURLSessionTaskGroupForConfiguration <NSObject>
@property (__weak,readonly) NSURLSessionConfiguration * _groupConfiguration; 
@property (__weak,readonly) NSURLSession * _groupSession; 
@required
-(id)dataTaskWithRequest:(id)arg1;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)uploadTaskWithStreamedRequest:(id)arg1;
-(NSURLSessionConfiguration *)_groupConfiguration;
-(NSURLSession *)_groupSession;

@end

