#ifndef SRC_TOOLS_H_
#define SRC_TOOLS_H_
#include <vector>
#include "./Eigen/Dense"

using Eigen::MatrixXd;
using Eigen::VectorXd;
using std::vector;

class Tools {
 public:
  /**
   * Constructor.
   */
  Tools();

  /**
   * Destructor.
   */
  virtual ~Tools();

  /**
   * A helper method to calculate RMSE.
   */
  VectorXd CalculateRMSE(const vector<VectorXd> &estimations, const vector<VectorXd> &ground_truth);

  /**
   * A helper method to calculate Jacobians.
   */
  MatrixXd CalculateJacobian(const VectorXd& x_state);

  /**
   * A helper method to calculate the covariant matrix Q.
   */
  MatrixXd CalculateCovariantMatrix(const double dt, const double noise_ax, const double noise_ay);
};

#endif // SRC_TOOLS_H_
