/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSString, NSURL, NSError, SKPaymentTransaction;

@interface SKDownload : NSObject {

	id _internal;

}

@property (setter=_setDownloadID:,getter=_downloadID,nonatomic,copy) NSNumber * _downloadID; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) long long downloadState; 
@property (nonatomic,readonly) long long contentLength; 
@property (nonatomic,readonly) long long expectedContentLength; 
@property (nonatomic,readonly) NSString * contentIdentifier; 
@property (nonatomic,readonly) NSURL * contentURL; 
@property (nonatomic,readonly) NSString * contentVersion; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) float progress; 
@property (nonatomic,readonly) double timeRemaining; 
@property (nonatomic,readonly) SKPaymentTransaction * transaction; 
-(BOOL)isEqual:(id)arg1 ;
-(id)init;
-(NSError *)error;
-(long long)state;
-(long long)expectedContentLength;
-(float)progress;
-(void)_setError:(id)arg1 ;
-(void)_setTransaction:(id)arg1 ;
-(void)_setContentIdentifier:(id)arg1 ;
-(SKPaymentTransaction *)transaction;
-(NSString *)contentVersion;
-(long long)contentLength;
-(NSURL *)contentURL;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)contentIdentifier;
-(void)_setVersion:(id)arg1 ;
-(NSNumber *)_downloadID;
-(long long)downloadState;
-(double)timeRemaining;
-(void)_setContentLength:(id)arg1 ;
-(void)_setContentURL:(id)arg1 ;
-(void)_setDownloadState:(long long)arg1 ;
-(void)_setProgress:(float)arg1 ;
-(void)_setTimeRemaining:(double)arg1 ;
-(void)_applyChangeset:(id)arg1 ;
-(void)_setDownloadID:(id)arg1 ;
@end

