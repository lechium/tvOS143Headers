/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, IKDOMNode;


@protocol IKJSDOMXPathResult <JSExport>
@property (nonatomic,readonly) long long resultType; 
@property (nonatomic,readonly) long long numberValue; 
@property (nonatomic,__weak,readonly) NSString * stringValue; 
@property (nonatomic,readonly) BOOL booleanValue; 
@property (nonatomic,__weak,readonly) IKDOMNode * singleNodeValue; 
@property (nonatomic,readonly) BOOL invalidIteratorState; 
@property (nonatomic,readonly) long long snapshotLength; 
@required
-(NSString *)stringValue;
-(long long)resultType;
-(long long)numberValue;
-(BOOL)booleanValue;
-(IKDOMNode *)singleNodeValue;
-(BOOL)invalidIteratorState;
-(long long)snapshotLength;
-(id)iterateNext;
-(id)snapshotItem:(long long)arg1;

@end

