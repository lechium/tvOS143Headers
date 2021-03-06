/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEIKEv2RequestContext.h>

@class NEIKEv2ChildSA;

@interface NEIKEv2NewChildContext : NEIKEv2RequestContext {

	NEIKEv2ChildSA* _childSA;

}

@property (nonatomic,retain) NEIKEv2ChildSA * childSA;              //@synthesize childSA=_childSA - In the implementation block
-(id)description;
-(void)setChildSA:(NEIKEv2ChildSA *)arg1 ;
-(NEIKEv2ChildSA *)childSA;
-(id)initWithChildSA:(id)arg1 ;
@end

