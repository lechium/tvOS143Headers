/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSURLSession, NSURLSessionDataTask, MCSession, NSString, MCPeerID;

@interface MCResourceDownloader : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {

	NSURLSession* _urlSession;
	NSURLSessionDataTask* _urlTask;
	/*^block*/id _urlResponseHandler;
	MCSession* _session;
	NSString* _resourceName;
	MCPeerID* _peerID;

}

@property (nonatomic,retain) NSURLSession * urlSession;                   //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * urlTask;              //@synthesize urlTask=_urlTask - In the implementation block
@property (assign,nonatomic) id urlResponseHandler;                       //@synthesize urlResponseHandler=_urlResponseHandler - In the implementation block
@property (assign,nonatomic) MCSession * session;                         //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * resourceName;                       //@synthesize resourceName=_resourceName - In the implementation block
@property (nonatomic,retain) MCPeerID * peerID;                           //@synthesize peerID=_peerID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(MCSession *)session;
-(void)setSession:(MCSession *)arg1 ;
-(MCPeerID *)peerID;
-(void)setPeerID:(MCPeerID *)arg1 ;
-(NSURLSessionDataTask *)urlTask;
-(NSURLSession *)urlSession;
-(void)setUrlTask:(NSURLSessionDataTask *)arg1 ;
-(NSString *)resourceName;
-(void)setResourceName:(NSString *)arg1 ;
-(void)setUrlSession:(NSURLSession *)arg1 ;
-(void)syncCloseStreamForSession:(id)arg1 withError:(id)arg2 ;
-(void)sendData:(id)arg1 fromByteOffset:(unsigned long long)arg2 ;
-(id)initWithSession:(id)arg1 resourceUrl:(id)arg2 name:(id)arg3 peerID:(id)arg4 ;
-(id)urlResponseHandler;
-(void)setUrlResponseHandler:(id)arg1 ;
@end

