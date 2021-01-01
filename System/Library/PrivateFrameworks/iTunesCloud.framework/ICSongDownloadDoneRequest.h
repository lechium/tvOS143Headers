/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSString, ICStoreURLRequest;

@interface ICSongDownloadDoneRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	NSString* _downloadIdentifier;
	unsigned long long _songID;
	ICStoreURLRequest* _storeURLRequest;

}
-(void)cancel;
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 downloadIdentifier:(id)arg2 songID:(unsigned long long)arg3 ;
@end
