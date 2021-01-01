/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSString, NSData, NSURL;

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask {

	BOOL _forceToServer;
	NSString* _previousETag;
	NSString* _requestDataContentType;
	NSData* _requestDataPayload;
	BOOL _sendOrder;
	int _absoluteOrder;
	NSURL* _priorOrderedURL;

}

@property (nonatomic,retain) NSString * requestDataContentType;              //@synthesize requestDataContentType=_requestDataContentType - In the implementation block
@property (nonatomic,retain) NSData * requestDataPayload;                    //@synthesize requestDataPayload=_requestDataPayload - In the implementation block
@property (assign,nonatomic) BOOL forceToServer;                             //@synthesize forceToServer=_forceToServer - In the implementation block
@property (nonatomic,retain) NSURL * priorOrderedURL;                        //@synthesize priorOrderedURL=_priorOrderedURL - In the implementation block
@property (assign,nonatomic) int absoluteOrder;                              //@synthesize absoluteOrder=_absoluteOrder - In the implementation block
@property (nonatomic,retain) NSString * previousETag;                        //@synthesize previousETag=_previousETag - In the implementation block
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(id)requestBody;
-(int)absoluteOrder;
-(id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4 ;
-(void)setAbsoluteOrder:(int)arg1 ;
-(void)setPriorOrderedURL:(NSURL *)arg1 ;
-(NSString *)previousETag;
-(id)additionalHeaderValues;
-(void)setPreviousETag:(NSString *)arg1 ;
-(BOOL)forceToServer;
-(NSData *)requestDataPayload;
-(NSString *)requestDataContentType;
-(void)setForceToServer:(BOOL)arg1 ;
-(void)setRequestDataContentType:(NSString *)arg1 ;
-(void)setRequestDataPayload:(NSData *)arg1 ;
-(NSURL *)priorOrderedURL;
@end

