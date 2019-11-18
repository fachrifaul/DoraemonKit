//
//  DoraemonMockManager.h
//  AFNetworking
//
//  Created by didi on 2019/10/31.
//

#import <Foundation/Foundation.h>
#import "DoraemonMockAPIModel.h"
#import "DoraemonMockUpLoadModel.h"

NS_ASSUME_NONNULL_BEGIN
@interface DoraemonMockManager : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, assign) BOOL mock;
@property (nonatomic, strong) NSMutableArray<DoraemonMockAPIModel *> *mockArray;
@property (nonatomic, strong) NSMutableArray<DoraemonMockUpLoadModel *> *upLoadArray;

- (void)queryMockData;

- (BOOL)needMock:(NSURLRequest *)request;

- (NSString *)getSceneId:(NSURLRequest *)request;

- (BOOL)needSave:(NSURLRequest *)request;

@end
NS_ASSUME_NONNULL_END
