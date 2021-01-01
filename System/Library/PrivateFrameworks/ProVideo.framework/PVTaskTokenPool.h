/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PVTaskTokenPoolDelegate;
#import <ProVideo/ProVideo-Structs.h>
@interface PVTaskTokenPool : NSObject {

	unsigned long long _tokenCounter;
	stack<unsigned long, std::__1::deque<unsigned long, std::__1::allocator<unsigned long> > >* _tokenData;
	mutex _tokenLock;
	id<PVTaskTokenPoolDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PVTaskTokenPoolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PVTaskTokenPoolDelegate>)delegate;
-(void)setDelegate:(id<PVTaskTokenPoolDelegate>)arg1 ;
-(void)returnToken:(id)arg1 ;
-(id)initWithOffset:(unsigned long long)arg1 ;
-(id)getToken;
@end

