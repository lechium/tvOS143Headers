/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKMediaLibraryRequestOperation.h>

@interface TVHKMediaLibraryAuthorizedAccountsRevisionOperation : TVHKMediaLibraryRequestOperation {

	BOOL _success;
	unsigned _revision;

}

@property (assign,nonatomic) BOOL success;                   //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) unsigned revision;              //@synthesize revision=_revision - In the implementation block
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setRevision:(unsigned)arg1 ;
-(void)_handleResponse:(id)arg1 ;
-(unsigned)revision;
-(id)initWithRequest:(id)arg1 requestSession:(id)arg2 ;
-(id)initWithSessionState:(id)arg1 requestSession:(id)arg2 ;
@end

